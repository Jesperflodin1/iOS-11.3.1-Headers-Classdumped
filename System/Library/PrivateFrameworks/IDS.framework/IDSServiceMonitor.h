/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSServiceMonitor : NSObject {

	long long _availability;
	NSString* _service;
	int _token;

}

@property (nonatomic,readonly) NSString * service; 
-(NSString *)service;
-(void)dealloc;
-(long long)serviceAvailability;
-(void)_postAvailability:(long long)arg1 ;
-(void)updateAvailability;
-(id)initWithService:(id)arg1 ;
-(void)_updateAvailability;
@end

