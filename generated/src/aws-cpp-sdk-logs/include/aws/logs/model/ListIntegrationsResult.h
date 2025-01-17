﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IntegrationSummary.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  class ListIntegrationsResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API ListIntegrationsResult();
    AWS_CLOUDWATCHLOGS_API ListIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API ListIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array, where each object in the array contains information about one
     * CloudWatch Logs integration in this account. </p>
     */
    inline const Aws::Vector<IntegrationSummary>& GetIntegrationSummaries() const{ return m_integrationSummaries; }
    inline void SetIntegrationSummaries(const Aws::Vector<IntegrationSummary>& value) { m_integrationSummaries = value; }
    inline void SetIntegrationSummaries(Aws::Vector<IntegrationSummary>&& value) { m_integrationSummaries = std::move(value); }
    inline ListIntegrationsResult& WithIntegrationSummaries(const Aws::Vector<IntegrationSummary>& value) { SetIntegrationSummaries(value); return *this;}
    inline ListIntegrationsResult& WithIntegrationSummaries(Aws::Vector<IntegrationSummary>&& value) { SetIntegrationSummaries(std::move(value)); return *this;}
    inline ListIntegrationsResult& AddIntegrationSummaries(const IntegrationSummary& value) { m_integrationSummaries.push_back(value); return *this; }
    inline ListIntegrationsResult& AddIntegrationSummaries(IntegrationSummary&& value) { m_integrationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IntegrationSummary> m_integrationSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
