#include "CarModel.h"

void CCarModel::Run()
{
    vector<string>::const_iterator it = m_pSequence->begin();
    for(;it < m_pSequence->end(); ++it)
    {
        string actionName = *it;
        if (actionName.compare("start") == 0)
        {
            Start();
        }
        else if (actionName.compare("Stop") == 0)
        {
            Stop();
        }
        else if (actionName.compare("alarm") == 0)
        {
            Alarm();
        }
        else if (actionName.compare("engine boom") == 0)
        {
            EngineBoom();
        }
    }
}

void CCarModel::SetSequence(vector<string>* pSeq)
{
    m_pSequence = pSeq;
}
