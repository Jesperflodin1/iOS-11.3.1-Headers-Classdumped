/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEODirectionsRequest, GEOComposedRoute, NSArray, NSNumber, NSDictionary;


@protocol GEODirectionServiceTicket <NSObject>
@property (nonatomic,readonly) GEODirectionsRequest * request; 
@property (nonatomic,readonly) BOOL isReroute; 
@property (nonatomic,readonly) GEOComposedRoute * originalRoute; 
@property (nonatomic,readonly) NSArray * waypoints; 
@property (nonatomic,copy,readonly) NSNumber * requestPriority; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) BOOL isDoom; 
@required
-(GEOComposedRoute *)originalRoute;
-(NSArray *)waypoints;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(BOOL)isReroute;
-(NSNumber *)requestPriority;
-(BOOL)isDoom;
-(void)cancel;
-(GEODirectionsRequest *)request;

@end

