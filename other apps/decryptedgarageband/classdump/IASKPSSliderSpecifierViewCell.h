//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IASKSlider, UIImageView;

@interface IASKPSSliderSpecifierViewCell : UITableViewCell
{
    IASKSlider *_slider;
    UIImageView *_minImage;
    UIImageView *_maxImage;
}

@property(retain, nonatomic) UIImageView *maxImage; // @synthesize maxImage=_maxImage;
@property(retain, nonatomic) UIImageView *minImage; // @synthesize minImage=_minImage;
@property(retain, nonatomic) IASKSlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

