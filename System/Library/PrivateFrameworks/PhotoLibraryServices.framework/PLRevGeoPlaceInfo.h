/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSSet, NSNumber;

@interface PLRevGeoPlaceInfo : NSObject {

	NSMutableSet* _geoPlaceInfos;
	NSString* _placeName;

}

@property (nonatomic,copy,readonly) NSString * placeName;                  //@synthesize placeName=_placeName - In the implementation block
@property (nonatomic,retain,readonly) NSSet * geoPlaceInfos;               //@synthesize geoPlaceInfos=_geoPlaceInfos - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minimumArea; 
-(void)dealloc;
-(NSString *)placeName;
-(NSNumber *)minimumArea;
-(NSSet *)geoPlaceInfos;
-(id)initWithPlaceName:(id)arg1 ;
-(void)addPlaceInfo:(id)arg1 ;
@end
