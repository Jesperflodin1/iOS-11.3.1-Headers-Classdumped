/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKReverseGeocoderDelegate, MKMapServiceTicket;
#import <MapKit/MapKit-Structs.h>
@class MKMapItem;

@interface MKReverseGeocoderInternal : NSObject {

	CLLocationCoordinate2D coordinate;
	id<MKReverseGeocoderDelegate> delegate;
	MKMapItem* mapItem;
	id<MKMapServiceTicket> ticket;
	BOOL querying;

}
@end

