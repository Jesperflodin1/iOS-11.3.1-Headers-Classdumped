/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASFriend, HKSample;

@interface ASActivityDataNotification : NSObject {

	ASFriend* _friend;
	HKSample* _sample;

}

@property (nonatomic,retain) ASFriend * friend;              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) HKSample * sample;              //@synthesize sample=_sample - In the implementation block
-(ASFriend *)friend;
-(void)setFriend:(ASFriend *)arg1 ;
-(void)setSample:(HKSample *)arg1 ;
-(HKSample *)sample;
@end
