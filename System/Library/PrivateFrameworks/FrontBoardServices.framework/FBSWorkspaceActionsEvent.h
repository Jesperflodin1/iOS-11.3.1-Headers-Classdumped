/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class NSSet;

@interface FBSWorkspaceActionsEvent : FBSWorkspaceEvent {

	NSSet* _actions;

}

@property (nonatomic,copy) NSSet * actions;              //@synthesize actions=_actions - In the implementation block
-(void)setActions:(NSSet *)arg1 ;
-(void)dealloc;
-(NSSet *)actions;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

