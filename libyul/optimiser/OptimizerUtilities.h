/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * Small useful snippets for the optimiser.
 */

#pragma once

#include <libsolutil/Common.h>
#include <libyul/AsmDataForward.h>
#include <libyul/Dialect.h>
#include <libyul/YulString.h>

namespace solidity::yul
{

/// Removes statements that are just empty blocks (non-recursive).
void removeEmptyBlocks(Block& _block);

bool isRestrictedIdentifier(Dialect const& _dialect, YulString const& _identifier);

}
