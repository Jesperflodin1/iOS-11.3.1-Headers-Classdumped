/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKJSDOMLSParser <JSExport>
@property (getter=appendAsChildrenAction,readonly) long long ACTION_APPEND_AS_CHILDREN; 
@property (getter=replaceChildrenAction,readonly) long long ACTION_REPLACE_CHILDREN; 
@property (getter=insertBeforeAction,readonly) long long ACTION_INSERT_BEFORE; 
@property (getter=insertAfterAction,readonly) long long ACTION_INSERT_AFTER; 
@property (getter=replaceAction,readonly) long long ACTION_REPLACE; 
@required
-(id)parseWithContext:(id)arg1 :(id)arg2 :(long long)arg3;
-(long long)appendAsChildrenAction;
-(long long)replaceChildrenAction;
-(long long)insertBeforeAction;
-(long long)insertAfterAction;
-(long long)replaceAction;
-(id)parse:(id)arg1;

@end

