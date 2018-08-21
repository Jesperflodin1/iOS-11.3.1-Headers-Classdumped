/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _GEOMapURLBuilder;

@interface _MKURLBuilder : NSObject {

	_GEOMapURLBuilder* _realBuilder;

}
+(id)URLForSearch:(id)arg1 ;
+(id)URLForSearch:(id)arg1 near:(CLLocationCoordinate2D)arg2 ;
+(id)URLForSearch:(id)arg1 at:(CLLocationCoordinate2D)arg2 span:(CGSize)arg3 ;
+(id)URLForSearch:(id)arg1 at:(CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 ;
+(id)URLForAddress:(id)arg1 ;
+(id)URLForAddress:(id)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 label:(id)arg2 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(BOOL)arg5 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 ;
+(id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(unsigned long long)arg3 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 transport:(unsigned long long)arg2 ;
+(id)URLForDirectionsFromHereTo:(id)arg1 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 extraStorage:(id)arg6 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(BOOL)arg7 ;
+(id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
+(id)URLForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 useWebPlaceCard:(BOOL)arg4 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 useWebPlaceCard:(BOOL)arg6 ;
+(id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 address:(id)arg5 useWebPlaceCard:(BOOL)arg6 mapItemData:(id)arg7 ;
-(void)setTransportType:(unsigned long long)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setDisplayRegion:(SCD_Struct_MK5)arg1 ;
-(id)initForSearch:(id)arg1 ;
-(void)setNear:(CLLocationCoordinate2D)arg1 ;
-(void)setSearchLocation:(CLLocationCoordinate2D)arg1 span:(CGSize)arg2 ;
-(void)setSearchLocation:(CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 ;
-(id)initForCoordinate:(CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 ;
-(id)initForCoordinate:(CLLocationCoordinate2D)arg1 label:(id)arg2 ;
-(id)initForAddress:(id)arg1 label:(id)arg2 ;
-(id)initForDirectionsTo:(id)arg1 ;
-(void)setStartAddress:(id)arg1 ;
-(id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 ;
-(id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3 ;
-(void)setBusinessCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setBusinessAddress:(id)arg1 ;
-(id)build;
-(id)buildForWeb;
-(void)setContentProvider:(id)arg1 ;
@end

