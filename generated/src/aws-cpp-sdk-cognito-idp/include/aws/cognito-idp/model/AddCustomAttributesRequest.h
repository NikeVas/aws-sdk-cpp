﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to add custom attributes.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AddCustomAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AddCustomAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AddCustomAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddCustomAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to add custom attributes.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AddCustomAttributesRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AddCustomAttributesRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AddCustomAttributesRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of custom attribute names and other properties. Sets the following
     * characteristics:</p> <dl> <dt>AttributeDataType</dt> <dd> <p>The expected data
     * type. Can be a string, a number, a date and time, or a boolean.</p> </dd>
     * <dt>Mutable</dt> <dd> <p>If true, you can grant app clients write access to the
     * attribute value. If false, the attribute value can only be set up on sign-up or
     * administrator creation of users.</p> </dd> <dt>Name</dt> <dd> <p>The attribute
     * name. For an attribute like <code>custom:myAttribute</code>, enter
     * <code>myAttribute</code> for this field.</p> </dd> <dt>Required</dt> <dd>
     * <p>When true, users who sign up or are created must set a value for the
     * attribute.</p> </dd> <dt>NumberAttributeConstraints</dt> <dd> <p>The minimum and
     * maximum length of accepted values for a <code>Number</code>-type attribute.</p>
     * </dd> <dt>StringAttributeConstraints</dt> <dd> <p>The minimum and maximum length
     * of accepted values for a <code>String</code>-type attribute.</p> </dd>
     * <dt>DeveloperOnlyAttribute</dt> <dd> <p>This legacy option creates an attribute
     * with a <code>dev:</code> prefix. You can only set the value of a developer-only
     * attribute with administrative IAM credentials.</p> </dd> </dl>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetCustomAttributes() const{ return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::Vector<SchemaAttributeType>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::Vector<SchemaAttributeType>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline AddCustomAttributesRequest& WithCustomAttributes(const Aws::Vector<SchemaAttributeType>& value) { SetCustomAttributes(value); return *this;}
    inline AddCustomAttributesRequest& WithCustomAttributes(Aws::Vector<SchemaAttributeType>&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline AddCustomAttributesRequest& AddCustomAttributes(const SchemaAttributeType& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }
    inline AddCustomAttributesRequest& AddCustomAttributes(SchemaAttributeType&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<SchemaAttributeType> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
