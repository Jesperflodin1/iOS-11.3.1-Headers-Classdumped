/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKAnnotationPrivate.h>

@class CLLocation, VKCustomFeature, NSString;

@interface MKPointAnnotation : MKShape <MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate> {

	CLLocationCoordinate2D _coordinate;
	long long _representation;
	VKCustomFeature* _customFeature;
	CLLocation* _location;

}

@property (assign,nonatomic) long long representation;                       //@synthesize representation=_representation - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(id)feature;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isPersistent;
-(long long)representation;
-(id)reuseIdentifier;
-(void)prepareForReuse;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)annotation;
-(BOOL)_shouldDeselectWhenDragged;
-(BOOL)showsBalloonCallout;
-(id)viewRepresentation;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(void)_invalidateCachedCoordinate;
-(BOOL)_isPendingSelectionAnimated;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
-(BOOL)shouldRepresentSelf;
-(void)setRepresentation:(long long)arg1 ;
@end

