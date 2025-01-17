﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EmailAddressMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class SearchEmailAddressesResult
  {
  public:
    AWS_CONNECT_API SearchEmailAddressesResult();
    AWS_CONNECT_API SearchEmailAddressesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchEmailAddressesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchEmailAddressesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchEmailAddressesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchEmailAddressesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of email addresses matching SearchFilter and SearchCriteria </p>
     */
    inline const Aws::Vector<EmailAddressMetadata>& GetEmailAddresses() const{ return m_emailAddresses; }
    inline void SetEmailAddresses(const Aws::Vector<EmailAddressMetadata>& value) { m_emailAddresses = value; }
    inline void SetEmailAddresses(Aws::Vector<EmailAddressMetadata>&& value) { m_emailAddresses = std::move(value); }
    inline SearchEmailAddressesResult& WithEmailAddresses(const Aws::Vector<EmailAddressMetadata>& value) { SetEmailAddresses(value); return *this;}
    inline SearchEmailAddressesResult& WithEmailAddresses(Aws::Vector<EmailAddressMetadata>&& value) { SetEmailAddresses(std::move(value)); return *this;}
    inline SearchEmailAddressesResult& AddEmailAddresses(const EmailAddressMetadata& value) { m_emailAddresses.push_back(value); return *this; }
    inline SearchEmailAddressesResult& AddEmailAddresses(EmailAddressMetadata&& value) { m_emailAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of email addresses which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchEmailAddressesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchEmailAddressesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchEmailAddressesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchEmailAddressesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<EmailAddressMetadata> m_emailAddresses;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
