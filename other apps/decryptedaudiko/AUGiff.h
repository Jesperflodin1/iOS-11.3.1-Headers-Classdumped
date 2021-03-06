//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLJSONSerializing-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface AUGiff : MTLModel <MTLJSONSerializing>
{
    NSString *_item_id;
    NSDate *_importDatetime;
    NSString *_mediaPath;
    NSString *_imagePath;
    NSString *_videoPath;
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (id)importDatetimeJSONTransformer;
+ (id)heightJSONTransformer;
+ (id)widthJSONTransformer;
+ (id)dateFormatter;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *mediaPath; // @synthesize mediaPath=_mediaPath;
@property(retain, nonatomic) NSDate *importDatetime; // @synthesize importDatetime=_importDatetime;
@property(retain, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

