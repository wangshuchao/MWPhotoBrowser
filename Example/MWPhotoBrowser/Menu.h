//
//  Menu.h
//  MWPhotoBrowser
//
//  Created by Michael Waterfall on 21/10/2010.
//  Copyright 2010 d3i. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MWPhotoBrowser.h"
#import <Photos/Photos.h>
//#import <AssetsLibrary/AssetsLibrary.h>

@interface Menu : UITableViewController <MWPhotoBrowserDelegate> {
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_selections;
}

@property (nonatomic, strong) NSMutableArray *photos;
@property (nonatomic, strong) NSMutableArray *thumbs;
@property (nonatomic, strong) NSMutableArray *assets;

/** 相册管理 */
@property (nonatomic,strong) PHImageManager *imageManager;
//@property (nonatomic, strong) ALAssetsLibrary *ALAssetsLibrary;

- (void)loadAssets;

@end
