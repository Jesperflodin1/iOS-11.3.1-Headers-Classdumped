/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassDeleteHandler <NSObject>
@optional
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2;
-(BOOL)isDeletionInProgressForPass:(id)arg1;

@required
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;

@end

