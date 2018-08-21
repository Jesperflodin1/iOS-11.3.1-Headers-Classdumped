/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPNondurableMediaItem.h>

@class NSUUID, NSString;

@interface MPPlaybackPlaceholderMediaItem : MPNondurableMediaItem {

	NSUUID* _uniqueIdentifier;
	NSString* _placeholderTitle;

}

@property (nonatomic,copy) NSString * placeholderTitle;              //@synthesize placeholderTitle=_placeholderTitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)placeholderTitle;
-(void)setPlaceholderTitle:(NSString *)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
@end

