/**
* Copyright 2018-2019 Dynatrace LLC
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef _PROVIDERS_ISESSIONIDPROVIDER_H
#define _PROVIDERS_ISESSIONIDPROVIDER_H

#include <cstdint>

namespace providers
{
	///
	/// abstract interface for all session providers
	///
	class ISessionIDProvider
	{
	public:
		///
		/// Destructor
		///
		virtual ~ISessionIDProvider() {}

		///
		/// Provide the next sessionID
		/// All positive integers greater than 0 can be used as sessionID
		/// @returns the id that will be used for the next session
		///
		virtual int32_t getNextSessionID() = 0;
	};
}
#endif
