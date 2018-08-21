/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {

	MKMapItem* _sourceMapItem;
	unsigned long long _transportType;

}

@property (nonatomic,retain) MKMapItem * destinationMapItem; 
@property (nonatomic,retain) MKMapItem * sourceMapItem;                     //@synthesize sourceMapItem=_sourceMapItem - In the implementation block
@property (assign,nonatomic) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
-(unsigned long long)transportType;
-(void)setTransportType:(unsigned long long)arg1 ;
-(id)activityURL;
-(id)activitySourceTitle;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)destinationMapItem;
-(MKMapItem *)sourceMapItem;
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
@end
