/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableFavorite.h>
#import <libobjc.A.dylib/MSPFavoriteRoute.h>

@class GEOStorageRouteRequestStorage, NSString, NSUUID;

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>

@property (nonatomic,copy) GEOStorageRouteRequestStorage * routeRequestStorage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * storageIdentifier; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(int)transportType;
-(id)startWaypoint;
-(id)endWaypoint;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
@end

