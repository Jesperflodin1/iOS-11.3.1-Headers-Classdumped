/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NUQOSMeter : NSObject {

	Aq _counts[4];
	Aq _total;

}
-(id)description;
-(void)recordQOS;
-(BOOL)log:(long long)arg1 ;
@end
