/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapServiceTicket;
@class MKLocalSearchRequest;

@interface MKLocalSearch : NSObject {

	MKLocalSearchRequest* _request;
	id<MKMapServiceTicket> _ticket;

}

@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
-(id)init;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(BOOL)isSearching;
-(void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_phoneOnlyStartWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

