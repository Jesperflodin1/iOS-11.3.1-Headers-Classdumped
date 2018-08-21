/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceSearchFieldPlaceholderTicket.h>

@protocol GEOMapServiceSearchFieldPlaceholderTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKSearchFieldPlaceholderTicket : NSObject <MKMapServiceSearchFieldPlaceholderTicket> {

	id<GEOMapServiceSearchFieldPlaceholderTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(id)initWithTicket:(id)arg1 ;
@end

