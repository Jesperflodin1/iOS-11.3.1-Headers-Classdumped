/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSData;

@interface ICSuzeLeaseResponse : NSObject {

	NSDate* _requestDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * clientData; 
@property (nonatomic,copy,readonly) NSDate * leaseExpirationDate; 
-(NSDate *)leaseExpirationDate;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 ;
-(NSData *)clientData;
@end

