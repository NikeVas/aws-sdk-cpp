﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ivschat
{
namespace Model
{

  /**
   * <p>Summary information about a room.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/RoomSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IVSCHAT_API RoomSummary
  {
  public:
    RoomSummary();
    RoomSummary(Aws::Utils::Json::JsonView jsonValue);
    RoomSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Room ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Room ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Room ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Room ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Room ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Room ARN.</p>
     */
    inline RoomSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Room ARN.</p>
     */
    inline RoomSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Room ARN.</p>
     */
    inline RoomSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline RoomSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline RoomSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline RoomSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline RoomSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline RoomSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline const MessageReviewHandler& GetMessageReviewHandler() const{ return m_messageReviewHandler; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline bool MessageReviewHandlerHasBeenSet() const { return m_messageReviewHandlerHasBeenSet; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline void SetMessageReviewHandler(const MessageReviewHandler& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = value; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline void SetMessageReviewHandler(MessageReviewHandler&& value) { m_messageReviewHandlerHasBeenSet = true; m_messageReviewHandler = std::move(value); }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline RoomSummary& WithMessageReviewHandler(const MessageReviewHandler& value) { SetMessageReviewHandler(value); return *this;}

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline RoomSummary& WithMessageReviewHandler(MessageReviewHandler&& value) { SetMessageReviewHandler(std::move(value)); return *this;}


    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline RoomSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline RoomSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Room name. The value does not need to be unique.</p>
     */
    inline RoomSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS Chat has no constraints beyond
     * what is documented there.</p>
     */
    inline RoomSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline RoomSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>. </p>
     */
    inline RoomSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    MessageReviewHandler m_messageReviewHandler;
    bool m_messageReviewHandlerHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
