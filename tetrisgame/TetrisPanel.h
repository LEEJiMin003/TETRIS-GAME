#pragma once
#include "GameBoard.h"
#include "Block.h"
#include "Tetris.h"
#include "resource.h"
#include <vector>

class TetrisPanel : public CStatic
{
public:
    TetrisPanel();
    virtual ~TetrisPanel();
    afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
    afx_msg void OnPaint();
    afx_msg void OnTimer(UINT_PTR nIDEvent);

protected:
    DECLARE_MESSAGE_MAP()
private:
    Tetris game;  // Tetris ���� ��ü �߰�
    CString m_strMessage;
    bool isGameOver=true;

    void HandleGameOverAndRestart();
};