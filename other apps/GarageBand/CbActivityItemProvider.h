//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, NSURL;

@interface CbActivityItemProvider : UIActivityItemProvider
{
    NSString *_songPath;
    NSURL *_pathURL;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)item;
- (id)initWithSongPathURL:(id)arg1 fileExtension:(id)arg2;
- (id)initWithSongPathURL:(id)arg1;

@end
