//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface GADNativeAdImage : NSObject
{
    _Bool _required;
    UIImage *_image;
    NSURL *_imageURL;
    double _scale;
}

+ (id)nativeAdImagesFromImageConfigurationArray:(id)arg1 options:(id)arg2;
@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURL:(id)arg1 scale:(double)arg2;
- (id)initWithImage:(id)arg1;

@end

