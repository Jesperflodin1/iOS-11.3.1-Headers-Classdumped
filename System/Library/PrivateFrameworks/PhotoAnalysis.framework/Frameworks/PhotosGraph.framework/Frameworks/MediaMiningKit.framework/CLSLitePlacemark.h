/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, CLLocation, CLRegion;

@interface CLSLitePlacemark : NSObject <NSSecureCoding> {

	CLLocationCoordinate2D _coordinate;
	CLLocationCoordinate2D _regionCenter;
	double _regionRadius;
	NSString* _regionIdentifier;
	NSDictionary* _addressDictionary;
	NSArray* _areasOfInterest;

}

@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) CLRegion * region; 
@property (nonatomic,readonly) NSDictionary * addressDictionary;              //@synthesize addressDictionary=_addressDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * areasOfInterest;                     //@synthesize areasOfInterest=_areasOfInterest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)litePlacemarkFromCLPlacemark:(id)arg1 ;
-(NSDictionary *)addressDictionary;
-(NSArray *)areasOfInterest;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CLRegion *)region;
-(CLLocation *)location;
@end
