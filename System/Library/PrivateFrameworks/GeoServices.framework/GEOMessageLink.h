/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDMessageLink, NSTimeZone, NSString;

@interface GEOMessageLink : NSObject {

	GEOPDMessageLink* _messageLink;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * messageID; 
@property (nonatomic,readonly) NSString * messageURLString; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) NSString * navBackgroundColorString; 
@property (nonatomic,readonly) NSString * navTintColorString; 
-(int)responseTime;
-(id)initWithMessageLink:(id)arg1 ;
-(NSString *)messageID;
-(NSString *)messageURLString;
-(NSString *)navBackgroundColorString;
-(NSString *)navTintColorString;
-(id)messageBusinessHours;
-(id)messageOperationBusinessDates;
-(unsigned long long)currentMessageOpeningHoursOptions;
-(NSTimeZone *)timeZone;
-(BOOL)isVerified;
@end

