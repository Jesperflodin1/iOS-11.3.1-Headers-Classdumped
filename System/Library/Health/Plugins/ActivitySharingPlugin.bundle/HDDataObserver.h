/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end

