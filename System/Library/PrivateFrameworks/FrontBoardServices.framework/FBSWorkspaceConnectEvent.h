/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSProcessHandle;

@interface FBSWorkspaceConnectEvent : FBSWorkspaceEvent {

	FBSProcessHandle* _processHandle;

}

@property (nonatomic,retain,readonly) FBSProcessHandle * processHandle;              //@synthesize processHandle=_processHandle - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSProcessHandle *)processHandle;
@end

