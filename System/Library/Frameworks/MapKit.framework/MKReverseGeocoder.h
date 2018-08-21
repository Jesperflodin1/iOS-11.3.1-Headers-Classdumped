/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class MKReverseGeocoderInternal, MKPlacemark;

@interface MKReverseGeocoder : NSObject {

	MKReverseGeocoderInternal* _internal;

}

@property (assign,nonatomic,__weak) id<MKReverseGeocoderDelegate> delegate; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (getter=isQuerying,nonatomic,readonly) BOOL querying; 
-(CLLocationCoordinate2D)coordinate;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)cancel;
-(id<MKReverseGeocoderDelegate>)delegate;
-(void)setDelegate:(id<MKReverseGeocoderDelegate>)arg1 ;
-(void)start;
-(BOOL)isQuerying;
-(void)_notifyError:(id)arg1 ;
-(void)_notifyNoResults;
-(void)_notifyResult:(id)arg1 ;
-(MKPlacemark *)placemark;
@end

