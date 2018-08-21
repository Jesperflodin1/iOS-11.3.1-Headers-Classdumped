/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelRequest.h>

@class NSMutableDictionary, MPSectionedCollection, NSDictionary;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest {

	NSMutableDictionary* _itemIndexPathToOverridePropertySet;
	MPSectionedCollection* _unpersonalizedContentDescriptors;
	MPSectionedCollection* _representedObjects;

}

@property (nonatomic,copy,readonly) NSDictionary * itemIndexPathToOverridePropertySet; 
@property (nonatomic,readonly) MPSectionedCollection * unpersonalizedContentDescriptors;              //@synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * representedObjects;                              //@synthesize representedObjects=_representedObjects - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultLibraryView;
+(id)sharedQueue;
+(id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPSectionedCollection *)unpersonalizedContentDescriptors;
-(NSDictionary *)itemIndexPathToOverridePropertySet;
-(id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2 ;
-(void)setRepresentedObjects:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)representedObjects;
-(id)initWithUnpersonalizedContentDescriptors:(id)arg1 ;
-(id)propertiesForItemAtIndexPath:(id)arg1 ;
-(void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2 ;
@end

