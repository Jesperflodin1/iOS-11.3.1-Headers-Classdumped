/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class UIImage, NSString, MKMapSnapshotCreator, VKMapSnapshotCreator;

@interface MKMapSnapshotRequest : NSObject {

	id _requester;
	id _context;
	CLLocationCoordinate2D _coordinate;
	unsigned long long _zoomLevel;
	CGSize _size;
	UIImage* _image;
	NSString* _attributionString;
	MKMapSnapshotCreator* _delegate;
	VKMapSnapshotCreator* _snapshotCreator;

}

@property (nonatomic,retain) id context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id requester;                                        //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) NSString * attributionString;                        //@synthesize attributionString=_attributionString - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                   //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) unsigned long long zoomLevel;                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic,__weak) MKMapSnapshotCreator * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                   //@synthesize image=_image - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(void)setZoomLevel:(unsigned long long)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)cancel;
-(MKMapSnapshotCreator *)delegate;
-(void)setDelegate:(MKMapSnapshotCreator *)arg1 ;
-(id)description;
-(UIImage *)image;
-(id)context;
-(void)start;
-(void)setContext:(id)arg1 ;
-(NSString *)attributionString;
-(void)setAttributionString:(NSString *)arg1 ;
-(unsigned long long)zoomLevel;
-(void)setRequester:(id)arg1 ;
-(id)requester;
@end

