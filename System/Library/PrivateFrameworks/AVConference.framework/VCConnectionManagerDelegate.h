/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCConnectionManagerDelegate <NSObject>
@optional
-(void)discardConnection:(id)arg1;

@required
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;

@end

