/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _containerID;

}
-(id)scopes;
-(id)displayTitle;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)startMonitoringChanges;
-(BOOL)shouldShowTopLevelContainers;
-(UIArrayController*)_createObserver;
-(id)initWithPickableTypes:(id)arg1 container:(id)arg2 ;
@end

