/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol GEODataSessionUpdatableTask <NSObject>
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,retain) id<NSObject> parsedResponse; 
@required
-(id<NSObject>)parsedResponse;
-(void)setParsedResponse:(id)arg1;
-(void)setError:(id)arg1;
-(NSError *)error;

@end

