/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MKMapItem, NSURLRequest, NSURL;

@interface MKMapItemMetadataRequest : NSObject {

	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest; 
@property (nonatomic,retain) MKMapItem * mapItem;                      //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)handleError:(id)arg1 ;
-(NSURL *)url;
-(NSURLRequest *)urlRequest;
-(void)handleData:(id)arg1 ;
@end

