//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CbLineView, UIImageView, UILabel;

@interface CbMusicImportAlbumHeaderCell : UITableViewCell
{
    struct CGPoint _titleLabelOrigin;
    struct CGPoint _numTracksTimeLabelOrigin;
    struct CGPoint _releaseLabelOrigin;
    UIImageView *artworkImageView;
    UILabel *artistLabel;
    UILabel *titleLabel;
    UILabel *numTracksTimeLabel;
    UILabel *releaseDateLabel;
    UILabel *exactTimeLabel;
    CbLineView *lineView;
}

@property(retain, nonatomic) CbLineView *lineView; // @synthesize lineView;
@property(retain, nonatomic) UILabel *exactTimeLabel; // @synthesize exactTimeLabel;
@property(retain, nonatomic) UILabel *releaseDateLabel; // @synthesize releaseDateLabel;
@property(retain, nonatomic) UILabel *numTracksTimeLabel; // @synthesize numTracksTimeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UILabel *artistLabel; // @synthesize artistLabel;
@property(retain, nonatomic) UIImageView *artworkImageView; // @synthesize artworkImageView;
- (void).cxx_destruct;
- (void)arrangeLabels;
- (void)layoutSubviews;
- (void)setNumberOfTracks:(int)arg1 andTime:(double)arg2;
- (void)setReleaseDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)dealloc;
- (void)setColors:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;

@end

