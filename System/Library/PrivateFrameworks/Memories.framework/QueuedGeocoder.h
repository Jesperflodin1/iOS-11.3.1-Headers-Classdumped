/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGeocoder, NSMapTable, GeocodeRequest, Reachability, NSRecursiveLock;

@interface QueuedGeocoder : NSObject {

	double _placemarkDifferentationDistance;
	CLGeocoder* _geocoder;
	NSMapTable* _locationToPlacemarksMap;
	NSMapTable* _locationToResultMap;
	GeocodeRequest* _currentRequest;
	Reachability* _reachability;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) CLGeocoder * geocoder;                               //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,retain) NSMapTable * locationToPlacemarksMap;                //@synthesize locationToPlacemarksMap=_locationToPlacemarksMap - In the implementation block
@property (nonatomic,retain) NSMapTable * locationToResultMap;                    //@synthesize locationToResultMap=_locationToResultMap - In the implementation block
@property (nonatomic,retain) GeocodeRequest * currentRequest;                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) Reachability * reachability;                         //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                              //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) double placemarkDifferentationDistance;              //@synthesize placemarkDifferentationDistance=_placemarkDifferentationDistance - In the implementation block
+(id)sharedGeocoder;
-(GeocodeRequest *)currentRequest;
-(id)init;
-(id)_init;
-(NSRecursiveLock *)lock;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void)dequeueRequest;
-(Reachability *)reachability;
-(void)setReachability:(Reachability *)arg1 ;
-(void)setLocationToPlacemarksMap:(NSMapTable *)arg1 ;
-(void)setLocationToResultMap:(NSMapTable *)arg1 ;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(void)setPlacemarkDifferentationDistance:(double)arg1 ;
-(NSMapTable *)locationToPlacemarksMap;
-(double)placemarkDifferentationDistance;
-(NSMapTable *)locationToResultMap;
-(void)setCurrentRequest:(GeocodeRequest *)arg1 ;
-(CLGeocoder *)geocoder;
@end

