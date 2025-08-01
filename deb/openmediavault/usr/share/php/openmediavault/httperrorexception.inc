<?php
/**
 * This file is part of OpenMediaVault.
 *
 * @license   https://www.gnu.org/licenses/gpl.html GPL Version 3
 * @author    Volker Theile <volker.theile@openmediavault.org>
 * @copyright Copyright (c) 2009-2025 Volker Theile
 *
 * OpenMediaVault is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * OpenMediaVault is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenMediaVault. If not, see <https://www.gnu.org/licenses/>.
 */
namespace OMV;

/**
 * Exception used to return an HTTP error code (4xx-5xx) to the client.
 * @ingroup api
 */
class HttpErrorException extends Exception {
	/**
	 * Constructor
	 * @param int $httpStatusCode The HTTP status code.
	 */
	public function __construct() {
		$args = func_get_args();
		$this->setHttpStatusCode(array_shift($args));
		parent::__construct(...$args);
	}
}
