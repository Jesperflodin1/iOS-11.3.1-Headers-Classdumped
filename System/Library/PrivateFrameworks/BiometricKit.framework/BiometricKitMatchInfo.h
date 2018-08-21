/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject {

	NSArray* _topology;
	NSDictionary* _details;

}

@property (nonatomic,retain) NSArray * topology;                  //@synthesize topology=_topology - In the implementation block
@property (nonatomic,retain) NSDictionary * details;              //@synthesize details=_details - In the implementation block
-(NSDictionary *)details;
-(void)setDetails:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTopology:(NSArray *)arg1 ;
-(NSArray *)topology;
@end

