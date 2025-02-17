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
!> @file
!> @brief Adds restart variable for unstructured domains for different dimension to be used in
!! the @ref register_restart_field interface

!> @addtogroup fms2_io_mod
!> @{

!> @brief Add a domain decomposed variable.
subroutine register_unstructured_domain_restart_variable_0d(fileobj, variable_name, vdata, &
                                                            dimensions, is_optional, deflate_level, &
                                                            chunksizes)

  type(FmsNetcdfUnstructuredDomainFile_t), intent(inout) :: fileobj !< File object.
  character(len=*), intent(in) :: variable_name !< Variable name.
  class(*),  intent(in), target :: vdata !< Variable data.
  character(len=*), dimension(:), intent(in), optional :: dimensions !< Dimension names.
  logical, intent(in), optional :: is_optional !< Prevent errors in read-only files
                                               !! if a variable does not exist.
  integer, intent(in), optional :: deflate_level !< The netcdf deflate level
                                                 !! This feature is only
                                                 !! available for netcdf4 files
  integer, intent(in), optional :: chunksizes(:) !< netcdf chunksize to use for this variable
                                                 !! This feature is only
                                                 !! available for netcdf4 files

  call netcdf_add_restart_variable(fileobj, variable_name, vdata, dimensions, is_optional, &
                                   deflate_level=deflate_level, chunksizes=chunksizes)
end subroutine register_unstructured_domain_restart_variable_0d


!> @brief Add a domain decomposed variable.
subroutine register_unstructured_domain_restart_variable_1d(fileobj, variable_name, vdata, &
                                                            dimensions, is_optional, deflate_level, &
                                                            chunksizes)

  type(FmsNetcdfUnstructuredDomainFile_t), intent(inout) :: fileobj !< File object.
  character(len=*), intent(in) :: variable_name !< Variable name.
  class(*), dimension(:), intent(in), target :: vdata !< Variable data.
  character(len=*), dimension(:), intent(in), optional :: dimensions !< Dimension names.
  logical, intent(in), optional :: is_optional !< Prevent errors in read-only files
                                               !! if a variable does not exist.
  integer, intent(in), optional :: deflate_level !< The netcdf deflate level
                                                 !! This feature is only
                                                 !! available for netcdf4 files
  integer, intent(in), optional :: chunksizes(:) !< netcdf chunksize to use for this variable
                                                 !! This feature is only
                                                 !! available for netcdf4 files

  call netcdf_add_restart_variable(fileobj, variable_name, vdata, dimensions, is_optional, &
                                   deflate_level=deflate_level, chunksizes=chunksizes)
end subroutine register_unstructured_domain_restart_variable_1d


!> @brief Add a domain decomposed variable.
subroutine register_unstructured_domain_restart_variable_2d(fileobj, variable_name, vdata, &
                                                            dimensions, is_optional, deflate_level, &
                                                            chunksizes )

  type(FmsNetcdfUnstructuredDomainFile_t), intent(inout) :: fileobj !< File object.
  character(len=*), intent(in) :: variable_name !< Variable name.
  class(*), dimension(:,:), intent(in), target :: vdata !< Variable data.
  character(len=*), dimension(:), intent(in), optional :: dimensions !< Dimension names.
  logical, intent(in), optional :: is_optional !< Prevent errors in read-only files
                                               !! if a variable does not exist.
  integer, intent(in), optional :: deflate_level !< The netcdf deflate level
                                                 !! This feature is only
                                                 !! available for netcdf4 files
  integer, intent(in), optional :: chunksizes(:) !< netcdf chunksize to use for this variable
                                                 !! This feature is only
                                                 !! available for netcdf4 files

  call netcdf_add_restart_variable(fileobj, variable_name, vdata, dimensions, is_optional, &
                                   deflate_level=deflate_level, chunksizes=chunksizes)
end subroutine register_unstructured_domain_restart_variable_2d


!> @brief Add a domain decomposed variable.
subroutine register_unstructured_domain_restart_variable_3d(fileobj, variable_name, vdata, &
                                                            dimensions, is_optional, deflate_level, &
                                                            chunksizes)

  type(FmsNetcdfUnstructuredDomainFile_t), intent(inout) :: fileobj !< File object.
  character(len=*), intent(in) :: variable_name !< Variable name.
  class(*), dimension(:,:,:), intent(in), target :: vdata !< Variable data.
  character(len=*), dimension(:), intent(in), optional :: dimensions !< Dimension names.
  logical, intent(in), optional :: is_optional !< Prevent errors in read-only files
                                               !! if a variable does not exist.
  integer, intent(in), optional :: deflate_level !< The netcdf deflate level
                                                 !! This feature is only
                                                 !! available for netcdf4 files
  integer, intent(in), optional :: chunksizes(:) !< netcdf chunksize to use for this variable
                                                 !! This feature is only
                                                 !! available for netcdf4 files

  call netcdf_add_restart_variable(fileobj, variable_name, vdata, dimensions, is_optional, &
                                   deflate_level=deflate_level, chunksizes=chunksizes)
end subroutine register_unstructured_domain_restart_variable_3d


!> @brief Add a domain decomposed variable.
subroutine register_unstructured_domain_restart_variable_4d(fileobj, variable_name, vdata, &
                                                            dimensions, is_optional, deflate_level, &
                                                            chunksizes)

  type(FmsNetcdfUnstructuredDomainFile_t), intent(inout) :: fileobj !< File object.
  character(len=*), intent(in) :: variable_name !< Variable name.
  class(*), dimension(:,:,:,:), intent(in), target :: vdata !< Variable data.
  character(len=*), dimension(:), intent(in), optional :: dimensions !< Dimension names.
  logical, intent(in), optional :: is_optional !< Prevent errors in read-only files
                                               !! if a variable does not exist.
  integer, intent(in), optional :: deflate_level !< The netcdf deflate level
                                                 !! This feature is only
                                                 !! available for netcdf4 files
  integer, intent(in), optional :: chunksizes(:) !< netcdf chunksize to use for this variable
                                                 !! This feature is only
                                                 !! available for netcdf4 files

  call netcdf_add_restart_variable(fileobj, variable_name, vdata, dimensions, is_optional, &
                                   deflate_level=deflate_level, chunksizes=chunksizes)
end subroutine register_unstructured_domain_restart_variable_4d


!> @brief Add a domain decomposed variable.
subroutine register_unstructured_domain_restart_variable_5d(fileobj, variable_name, vdata, &
                                                            dimensions, is_optional, deflate_level, &
                                                            chunksizes)

  type(FmsNetcdfUnstructuredDomainFile_t), intent(inout) :: fileobj !< File object.
  character(len=*), intent(in) :: variable_name !< Variable name.
  class(*), dimension(:,:,:,:,:), intent(in), target :: vdata !< Variable data.
  character(len=*), dimension(:), intent(in), optional :: dimensions !< Dimension names.
  logical, intent(in), optional :: is_optional !< Prevent errors in read-only files
                                               !! if a variable does not exist.
  integer, intent(in), optional :: deflate_level !< The netcdf deflate level
                                                 !! This feature is only
                                                 !! available for netcdf4 files
  integer, intent(in), optional :: chunksizes(:) !< netcdf chunksize to use for this variable
                                                 !! This feature is only
                                                 !! available for netcdf4 files
 
  call netcdf_add_restart_variable(fileobj, variable_name, vdata, dimensions, is_optional, &
                                   deflate_level=deflate_level, chunksizes=chunksizes)
end subroutine register_unstructured_domain_restart_variable_5d
!> @}
