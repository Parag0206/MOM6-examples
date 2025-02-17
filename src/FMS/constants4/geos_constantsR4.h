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

character(len=20), public, parameter :: constantsR4_version = 'FMSConstantsR4: GEOS'

!--- temporary definition for backwards compatibility
real(kind=RKIND), public, parameter :: small_fac = 1._r8_kind

!--- Spherical coordinate conversion constants
real(kind=r8_kind), public, parameter :: PI_8 = 3.14159265358979323846_r8_kind  !< Ratio of circle circumference to diameter [N/A]
real(kind=RKIND),   public, parameter :: PI   = PI_8                            !< Ratio of circle circumference to diameter [N/A]
real(kind=RKIND),   public, parameter :: RAD_TO_DEG  = 180._r8_kind/PI_8        !< Degrees per radian [deg/rad]
real(kind=RKIND),   public, parameter :: DEG_TO_RAD  = PI_8/180._r8_kind        !< Radians per degree [rad/deg]
real(kind=RKIND),   public, parameter :: RADIAN      = RAD_TO_DEG               !< Equal to RAD_TO_DEG for backward compatability. [rad/deg]

!--- Earth physical constants
real(kind=RKIND), public, parameter :: RADIUS             = 6371.0E3_r8_kind   !< Radius of the Earth [m]
real(kind=RKIND), public, parameter :: OMEGA              = 2.0*PI_8/86164.0   !< Rotation rate of the Earth [1/s]
real(kind=RKIND), public, parameter :: GRAV               = 9.80665_r8_kind    !< Acceleration due to gravity [m/s^2]
real(kind=RKIND), public, parameter :: SECONDS_PER_DAY    = 86400._r8_kind     !< Seconds in a day [s]
real(kind=RKIND), public, parameter :: SECONDS_PER_HOUR   =  3600._r8_kind     !< Seconds in an hour [s]
real(kind=RKIND), public, parameter :: SECONDS_PER_MINUTE =    60._r8_kind     !< Seconds in a minute [s]

!--- Various gas constants
real(kind=RKIND), public, parameter :: RDGAS    = 8314.47 /28.965           !< Gas constant for dry air [J/kg/deg]
real(kind=RKIND), public, parameter :: RVGAS    = 8314.47 /18.015           !< Gas constant for water vapor [J/kg/deg]
real(kind=RKIND), public, parameter :: HLV      = 2.4665E6_r8_kind          !< Latent heat of evaporation [J/kg]
real(kind=RKIND), public, parameter :: HLF      = 3.3370E5_r8_kind          !< Latent heat of fusion [J/kg]
real(kind=RKIND), public, parameter :: HLS      = HLV + HLF                 !< Latent heat of sublimation [J/kg]
real(kind=RKIND), public, parameter :: KAPPA    = RDGAS/(3.5*RDGAS)         !< RDGAS / (3.5*RDGAS) [dimensionless]
real(kind=RKIND), public, parameter :: CP_AIR   = RDGAS/KAPPA               !< Specific heat capacity of dry air
                                                                            !! at constant pressure [J/kg/deg]
real(kind=RKIND), public, parameter :: CP_VAPOR = 4.0_r8_kind*RVGAS         !< Specific heat capacity of water vapor
                                                                            !! at constant pressure [J/kg/deg]
real(kind=RKIND), public, parameter :: CP_OCEAN = 3989.24495292815_r8_kind  !< Specific heat capacity taken from McDougall (2002)
                                                                            !! "Potential Enthalpy ..." [J/kg/deg]
real(kind=RKIND), public, parameter :: DENS_H2O = 1000._r8_kind             !< Density of liquid water [kg/m^3]
real(kind=RKIND), public, parameter :: RHOAIR   = 1.292269_r8_kind          !< Reference atmospheric density [kg/m^3]
real(kind=RKIND), public, parameter :: RHO0     = 1.035E3_r8_kind           !< Average density of sea water [kg/m^3]
real(kind=RKIND), public, parameter :: RHO0R    = 1.0_r8_kind/RHO0          !< Reciprocal of average density of sea water [m^3/kg]
real(kind=RKIND), public, parameter :: RHO_CP   = RHO0*CP_OCEAN             !< (kg/m^3)*(cal/kg/deg C)(joules/cal) =
                                                                            !! (joules/m^3/deg C) [J/m^3/deg]
real(kind=RKIND), public, parameter :: O2MIXRAT = 2.0953E-01_r8_kind        !< Mixing ratio of molecular oxygen in air [dimensionless]
real(kind=RKIND), public, parameter :: WTMAIR   = 2.896440E+01_r8_kind      !< Molecular weight of air [AMU]
real(kind=RKIND), public, parameter :: WTMH2O   = WTMAIR*(RDGAS/RVGAS)      !< Molecular weight of water [AMU]
real(kind=RKIND), public, parameter :: WTMOZONE =  47.99820_r8_kind         !< Molecular weight of ozone [AMU]
real(kind=RKIND), public, parameter :: WTMC     =  12.00000_r8_kind         !< Molecular weight of carbon [AMU]
real(kind=RKIND), public, parameter :: WTMCO2   =  44.00995_r8_kind         !< Molecular weight of carbon dioxide [AMU]
real(kind=RKIND), public, parameter :: WTMCH4   =  16.0425_r8_kind          !< Molecular weight of methane [AMU]
real(kind=RKIND), public, parameter :: WTMO2    =  31.9988_r8_kind          !< Molecular weight of molecular oxygen [AMU]
real(kind=RKIND), public, parameter :: WTMCFC11 = 137.3681_r8_kind          !< Molecular weight of CFC-11 (CCl3F) [AMU]
real(kind=RKIND), public, parameter :: WTMCFC12 = 120.9135_r8_kind          !< Molecular weight of CFC-21 (CCl2F2) [AMU]
real(kind=RKIND), public, parameter :: WTMN     =  14.0067_r8_kind          !< Molecular weight of Nitrogen [AMU]
real(kind=RKIND), public, parameter :: DIFFAC   = 1.660_r8_kind             !< Diffusivity factor [dimensionless]
real(kind=RKIND), public, parameter :: ES0      = 1.0_r8_kind               !< Humidity factor [dimensionless]
                                                                            !! Controls the humidity content of the atmosphere through
                                                                            !! the Saturation Vapour Pressure expression
                                                                            !! when using DO_SIMPLE

!--- Pressure and Temperature constants
real(kind=RKIND), public, parameter :: PSTD     = 1.013250E+06_r8_kind      !< Mean sea level pressure [dynes/cm^2]
real(kind=RKIND), public, parameter :: PSTD_MKS = 101325.0_r8_kind          !< Mean sea level pressure [N/m^2]
real(kind=RKIND), public, parameter :: KELVIN   = 273.16_r8_kind            !< Degrees Kelvin at zero Celsius [K]
real(kind=RKIND), public, parameter :: TFREEZE  = 273.16_r8_kind            !< Freezing temperature of fresh water [K]
real(kind=RKIND), public, parameter :: C2DBARS  = 1.E-4_r8_kind             !< Converts rho*g*z (in mks) to dbars:
                                                                            !! 1dbar = 10^4 (kg/m^3)(m/s^2)m [dbars]

!--- Named constants
real(kind=RKIND), public, parameter :: STEFAN   = 5.6734E-8_r8_kind         !< Stefan-Boltzmann constant [W/m^2/deg^4]
real(kind=RKIND), public, parameter :: AVOGNO   = 6.023000E+23_r8_kind      !< Avogadro's number [atoms/mole]
real(kind=RKIND), public, parameter :: VONKARM  = 0.40_r8_kind              !< Von Karman constant [dimensionless]

!--- Miscellaneous constants
real(kind=RKIND), public, parameter :: ALOGMIN    = -50.0_r8_kind        !< Minimum value allowed as argument to log function [N/A]
real(kind=RKIND), public, parameter :: EPSLN      = 1.0E-40_r8_kind      !< A small number to prevent divide by zero exceptions [N/A]
real(kind=RKIND), public, parameter :: RADCON     = ((1.0E+02*GRAV)/(1.0D+04*CP_AIR))*SECONDS_PER_DAY  !< Factor to convert flux divergence
                                                                                                !! to heating rate in degrees per day
                                                                                                !! [deg sec/(cm day)]
real(kind=RKIND), public, parameter :: RADCON_MKS = (GRAV/CP_AIR)*SECONDS_PER_DAY               !< Factor to convert flux divergence
                                                                                                !! to heating rate in degrees per day
                                                                                                !! [deg sec/(m day)]
