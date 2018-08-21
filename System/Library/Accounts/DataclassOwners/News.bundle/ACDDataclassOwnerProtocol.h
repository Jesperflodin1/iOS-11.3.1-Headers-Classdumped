/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/DataclassOwners/News.bundle/News
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDDataclassOwnerProtocol <NSObject>
@optional
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 withError:(id*)arg3;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 withError:(id*)arg3;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 withError:(id*)arg3;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 withError:(id*)arg3;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 withError:(id*)arg5;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2;

@required
+(id)dataclasses;

@end

