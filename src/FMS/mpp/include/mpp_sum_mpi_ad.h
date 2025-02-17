! -*-f90-*-


!***********************************************************************
!*                   GNU Lesser General Public License
!*
!* This file is part of the GFDL Flexible Modeling System (FMS).
!*
!* FMS is free software: you can redistribute it and/or modify it under
!* the terms of the GNU Lesser General Public License as published by
!* the Free Software Foundation, either version 3 of the License, or (at
!* your option) any later version.
!*
!* FMS is distributed in the hope that it will be useful, but WITHOUT
!* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
!* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
!* for more details.
!*
!* You should have received a copy of the GNU Lesser General Public
!* License along with FMS.  If not, see <http://www.gnu.org/licenses/>.
!***********************************************************************
    !> Sums array a over the PEs in pelist (all PEs if this argument is omitted)
    !! result is also automatically broadcast: all PEs have the sum in a at the end
    !! we are using f77-style call: array passed by address and not descriptor; further,
    !! the f90 conformance check is avoided.
    !> @ingroup mpp_mod
    subroutine MPP_SUM_AD_( a, length, pelist )
      integer, intent(in) :: length
      integer, intent(in), optional :: pelist(:)
      MPP_TYPE_, intent(inout) :: a(*)
      integer :: n, errunit

      if( .NOT.module_is_initialized )call mpp_error( FATAL, 'MPP_SUM: You must first call mpp_init.' )
      n = get_peset(pelist); if( peset(n)%count.EQ.1 )return

      if( debug .and. (current_clock.NE.0) )call SYSTEM_CLOCK(start_tick)
      if( verbose )call mpp_error( NOTE, 'MPP_SUM: using MPI_ALLREDUCE...' )
      if( debug ) then
          errunit = stderr()
          write( errunit,* )'pe, n, peset(n)%id=', pe, n, peset(n)%id
      endif
      call mpp_broadcast(a, length, peset(n)%list(1), PELIST=pelist)
      if( debug .and. (current_clock.NE.0) )call increment_current_clock( EVENT_ALLREDUCE, length*MPP_TYPE_BYTELEN_ )
      return
    end subroutine MPP_SUM_AD_
!#######################################################################
#include <mpp_sum_ad.inc>
