﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/NotebookInstanceStatus.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides summary information for an SageMaker AI notebook
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NotebookInstanceSummary">AWS
   * API Reference</a></p>
   */
  class NotebookInstanceSummary
  {
  public:
    AWS_SAGEMAKER_API NotebookInstanceSummary();
    AWS_SAGEMAKER_API NotebookInstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NotebookInstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the notebook instance that you want a summary for.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }
    inline NotebookInstanceSummary& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance.</p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }
    inline bool NotebookInstanceArnHasBeenSet() const { return m_notebookInstanceArnHasBeenSet; }
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = value; }
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn = std::move(value); }
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArnHasBeenSet = true; m_notebookInstanceArn.assign(value); }
    inline NotebookInstanceSummary& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the notebook instance.</p>
     */
    inline const NotebookInstanceStatus& GetNotebookInstanceStatus() const{ return m_notebookInstanceStatus; }
    inline bool NotebookInstanceStatusHasBeenSet() const { return m_notebookInstanceStatusHasBeenSet; }
    inline void SetNotebookInstanceStatus(const NotebookInstanceStatus& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = value; }
    inline void SetNotebookInstanceStatus(NotebookInstanceStatus&& value) { m_notebookInstanceStatusHasBeenSet = true; m_notebookInstanceStatus = std::move(value); }
    inline NotebookInstanceSummary& WithNotebookInstanceStatus(const NotebookInstanceStatus& value) { SetNotebookInstanceStatus(value); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceStatus(NotebookInstanceStatus&& value) { SetNotebookInstanceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that you use to connect to the Jupyter notebook running in your
     * notebook instance. </p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline NotebookInstanceSummary& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline NotebookInstanceSummary& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline NotebookInstanceSummary& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ML compute instance that the notebook instance is running on.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline NotebookInstanceSummary& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline NotebookInstanceSummary& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the notebook instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline NotebookInstanceSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline NotebookInstanceSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the notebook instance was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline NotebookInstanceSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline NotebookInstanceSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a notebook instance lifecycle configuration associated with this
     * notebook instance.</p> <p>For information about notebook instance lifestyle
     * configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigName() const{ return m_notebookInstanceLifecycleConfigName; }
    inline bool NotebookInstanceLifecycleConfigNameHasBeenSet() const { return m_notebookInstanceLifecycleConfigNameHasBeenSet; }
    inline void SetNotebookInstanceLifecycleConfigName(const Aws::String& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = value; }
    inline void SetNotebookInstanceLifecycleConfigName(Aws::String&& value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName = std::move(value); }
    inline void SetNotebookInstanceLifecycleConfigName(const char* value) { m_notebookInstanceLifecycleConfigNameHasBeenSet = true; m_notebookInstanceLifecycleConfigName.assign(value); }
    inline NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(const Aws::String& value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(Aws::String&& value) { SetNotebookInstanceLifecycleConfigName(std::move(value)); return *this;}
    inline NotebookInstanceSummary& WithNotebookInstanceLifecycleConfigName(const char* value) { SetNotebookInstanceLifecycleConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Git repository associated with the notebook instance as its default code
     * repository. This can be either the name of a Git repository stored as a resource
     * in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. When you open a
     * notebook instance, it opens in the directory that contains this repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = value; }
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::move(value); }
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository.assign(value); }
    inline NotebookInstanceSummary& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}
    inline NotebookInstanceSummary& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}
    inline NotebookInstanceSummary& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to three Git repositories associated with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. These repositories
     * are cloned at the same level as the default repository of your notebook
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = value; }
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::move(value); }
    inline NotebookInstanceSummary& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}
    inline NotebookInstanceSummary& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}
    inline NotebookInstanceSummary& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    inline NotebookInstanceSummary& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(std::move(value)); return *this; }
    inline NotebookInstanceSummary& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    Aws::String m_notebookInstanceArn;
    bool m_notebookInstanceArnHasBeenSet = false;

    NotebookInstanceStatus m_notebookInstanceStatus;
    bool m_notebookInstanceStatusHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_notebookInstanceLifecycleConfigName;
    bool m_notebookInstanceLifecycleConfigNameHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
