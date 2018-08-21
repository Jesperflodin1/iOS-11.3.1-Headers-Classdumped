/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionURLOpener.h>

@class LSApplicationWorkspace, NSString;

@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener> {

	LSApplicationWorkspace* _workspace;

}

@property (nonatomic,readonly) LSApplicationWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)openURL:(id)arg1 isSensitive:(BOOL)arg2 withScheduler:(id)arg3 ;
-(id)openURL:(id)arg1 withScheduler:(id)arg2 ;
-(LSApplicationWorkspace *)workspace;
-(id)initWithWorkspace:(id)arg1 ;
@end

