/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RPRequestRegistration : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
@end

