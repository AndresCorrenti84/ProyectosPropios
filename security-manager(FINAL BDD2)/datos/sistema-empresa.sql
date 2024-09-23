-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 16-09-2023 a las 01:36:37
-- Versión del servidor: 10.4.28-MariaDB
-- Versión de PHP: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `sistema-empresa`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `cobertura`
--

CREATE TABLE `cobertura` (
  `Id-Lugar` int(4) NOT NULL,
  `Nombre-lugar` varchar(40) NOT NULL,
  `CodLugar` int(4) NOT NULL,
  `Cod-postal` int(4) NOT NULL,
  `Fecha-Alta` date NOT NULL,
  `Estado` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `especialidad`
--

CREATE TABLE `especialidad` (
  `CodEspecialidad` int(4) NOT NULL,
  `DescripcionEspecialidad` varchar(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

--
-- Volcado de datos para la tabla `especialidad`
--

INSERT INTO `especialidad` (`CodEspecialidad`, `DescripcionEspecialidad`) VALUES
(1, 'no letal'),
(2, 'medio'),
(3, 'letal');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `estado`
--

CREATE TABLE `estado` (
  `Estado` int(1) NOT NULL,
  `descEstado` varchar(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

--
-- Volcado de datos para la tabla `estado`
--

INSERT INTO `estado` (`Estado`, `descEstado`) VALUES
(1, 'activo'),
(0, 'inactivo');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `guardia`
--

CREATE TABLE `guardia` (
  `DNI` bigint(12) NOT NULL,
  `Nombre` varchar(40) NOT NULL,
  `Apellido` varchar(40) NOT NULL,
  `Telefono` bigint(20) NOT NULL,
  `Email` varchar(40) NOT NULL,
  `Domicilio` varchar(40) NOT NULL,
  `Fecha-Alta` date NOT NULL,
  `Estado` int(1) NOT NULL,
  `CodEspecialidad` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

--
-- Volcado de datos para la tabla `guardia`
--

INSERT INTO `guardia` (`DNI`, `Nombre`, `Apellido`, `Telefono`, `Email`, `Domicilio`, `Fecha-Alta`, `Estado`, `CodEspecialidad`) VALUES
(42354, 'lopessada', 'LOPE', 5345346, 'fdsfgasd', 'JDJDJDJD', '2023-09-14', 1, 1),
(432535, 'ANDRES', 'LOPE', 5345634, 'TEWQRTE', 'FGDFHDS', '2023-09-14', 1, 1),
(43943933, 'lucas', 'gomez', 324235346, 'lucas@gmail.com', 'bsas', '2023-09-14', 0, 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `jornadas`
--

CREATE TABLE `jornadas` (
  `id` int(10) NOT NULL,
  `DNI` bigint(12) NOT NULL,
  `Nombre` varchar(40) NOT NULL,
  `NombreLugar` varchar(40) NOT NULL,
  `FechaAct` date NOT NULL,
  `HoraEnt` time NOT NULL,
  `HoraSal` time NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

--
-- Volcado de datos para la tabla `jornadas`
--

INSERT INTO `jornadas` (`id`, `DNI`, `Nombre`, `NombreLugar`, `FechaAct`, `HoraEnt`, `HoraSal`) VALUES
(3, 432535, 'ANDRES', 'lopes', '2023-09-06', '22:30:00', '12:30:00'),
(4, 432535, 'ANDRES', 'perez', '2023-09-12', '00:50:00', '20:30:00'),
(5, 432535, 'ANDRES', 'pizaiolo', '2023-09-20', '13:30:00', '16:30:00'),
(6, 432535, 'ANDRES', 'burguery', '2023-09-16', '20:40:00', '00:40:00'),
(7, 43943933, 'lucas', 'la massa', '2023-09-16', '00:40:00', '05:35:00'),
(8, 43943933, 'lucas', 'la masita', '2023-09-18', '22:40:00', '00:40:00');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `lugares`
--

CREATE TABLE `lugares` (
  `CodLugar` int(4) NOT NULL,
  `DescripcionLugar` varchar(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

--
-- Volcado de datos para la tabla `lugares`
--

INSERT INTO `lugares` (`CodLugar`, `DescripcionLugar`) VALUES
(1, 'barrio privado'),
(2, 'escuela'),
(3, 'hospital'),
(4, 'evento'),
(5, 'guardia personal'),
(6, 'banco'),
(7, 'transporte de valor'),
(8, 'escolta de seguridad');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuario`
--

CREATE TABLE `usuario` (
  `DNI-Usuario` bigint(12) NOT NULL,
  `Nombre` varchar(40) NOT NULL,
  `Apellido` varchar(40) NOT NULL,
  `Telefono` bigint(20) NOT NULL,
  `Email` varchar(40) NOT NULL,
  `Contraseña` varchar(40) NOT NULL,
  `Domicilio` varchar(40) NOT NULL,
  `Cod-postal` int(8) NOT NULL,
  `Fecha-Alta` date NOT NULL,
  `Estado` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_swedish_ci;

--
-- Volcado de datos para la tabla `usuario`
--

INSERT INTO `usuario` (`DNI-Usuario`, `Nombre`, `Apellido`, `Telefono`, `Email`, `Contraseña`, `Domicilio`, `Cod-postal`, `Fecha-Alta`, `Estado`) VALUES
(31234, 'pepe', 'sanchez', 3245463, 'pepe@gmail.com', 'pepe02', 'pepe02', 0, '2023-06-01', 0),
(243234, 'pepe', 'sanchez', 2343254, 'pepe@hotmail.com', 'pepe04', 'los alamos', 0, '2023-06-06', 0),
(434343, 'lolo', 'popo', 23432423, 'gfsdfgdsfgdfg', '123456', '123456', 0, '2023-09-15', 1),
(2345664, 'jorge', 'perex', 23432536, 'jorjito@gmail.com', 'jorge02', 'Olascoaga', 0, '2023-06-14', 1);

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `cobertura`
--
ALTER TABLE `cobertura`
  ADD PRIMARY KEY (`Id-Lugar`);

--
-- Indices de la tabla `guardia`
--
ALTER TABLE `guardia`
  ADD PRIMARY KEY (`DNI`);

--
-- Indices de la tabla `jornadas`
--
ALTER TABLE `jornadas`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `usuario`
--
ALTER TABLE `usuario`
  ADD PRIMARY KEY (`DNI-Usuario`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `jornadas`
--
ALTER TABLE `jornadas`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
