/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@interface _UIDocumentPickerRootContainerModel : _UIDocumentPickerURLContainerModel {

	BOOL _isObservingContainers;

}
-(id)_containerListDidChange;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)startMonitoringChanges;
@end

