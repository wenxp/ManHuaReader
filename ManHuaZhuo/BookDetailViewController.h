//
//  BookDetailViewController.h
//  ManHuaZhuo
//
//  Created by 国翔 韩 on 12-10-5.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "DownloadHelper.h"
#import "PageControl.h"

@class BookModel;

@interface BookDetailViewController : UIViewController<UIScrollViewDelegate,DownloadHelperDelegate,PageControlDelegate,UIActionSheetDelegate>


-(id)initWithBook:(BookModel *)book;

@end
