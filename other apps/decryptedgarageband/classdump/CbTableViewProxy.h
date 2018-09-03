//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, UITableView;

@interface CbTableViewProxy : NSObject
{
    _Bool _scrollEnabled;
    _Bool _showsHorizontalScrollIndicator;
    _Bool _showsVerticalScrollIndicator;
    UITableView *_mappedTableView;
    NSDictionary *_mappedIndexPathToSubControllerIndexPathMappingDictionary;
    NSDictionary *_subControllerIndexPathToMappedIndexPathMappingDictionary;
}

@property(nonatomic) _Bool showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(nonatomic) _Bool showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(retain, nonatomic) NSDictionary *subControllerIndexPathToMappedIndexPathMappingDictionary; // @synthesize subControllerIndexPathToMappedIndexPathMappingDictionary=_subControllerIndexPathToMappedIndexPathMappingDictionary;
@property(retain, nonatomic) NSDictionary *mappedIndexPathToSubControllerIndexPathMappingDictionary; // @synthesize mappedIndexPathToSubControllerIndexPathMappingDictionary=_mappedIndexPathToSubControllerIndexPathMappingDictionary;
@property(retain, nonatomic) UITableView *mappedTableView; // @synthesize mappedTableView=_mappedTableView;
- (void).cxx_destruct;
- (void)flashScrollIndicators;
- (struct CGSize)contentSize;
- (void)reloadData;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)visibleCells;

@end

